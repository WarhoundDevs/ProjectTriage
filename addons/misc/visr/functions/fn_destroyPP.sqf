/*
    RDF_fnc_destroyPP

    Disables the VISR post-process chain. Despite the name (kept for
    symmetry with createPP), this does NOT call ppEffectDestroy - the
    handles are kept alive in RDF_VISR_ppHandles so the next enable is
    just a re-enable, not a full recreate.
*/

if (!hasInterface) exitWith {};

if (RDF_VISR_ppHandles isEqualTo []) exitWith {};

{ _x ppEffectEnable false; } forEach RDF_VISR_ppHandles;
