if (!hasInterface) exitWith {};

// Single source of truth for VISR on/off state - read by toggleVISR / render
missionNamespace setVariable ["RDF_VISR_enabled", false];

// Cache of nearby entities built by fn_scanEntities, consumed every frame by fn_render
RDF_VISR_trackedEntities = [];

// Handle for the CBA per-frame scan loop, only running while VISR is on
RDF_VISR_pfhHandle = -1;

// Handles for the post-process effect chain, created once on first enable
RDF_VISR_ppHandles = [];
