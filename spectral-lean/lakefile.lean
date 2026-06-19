import Lake
open Lake DSL

package «spectral» where
  leanOptions := #[⟨`autoImplicit, false⟩]
  moreLeanArgs := #["-M", "8192"]

@[default_target]
lean_exe «spectral» where
  root := `Spectral
