import Lake
open Lake DSL

package «ariori» where
  leanOptions := #[⟨`autoImplicit, false⟩]
  moreLeanArgs := #["-M", "8192"]

@[default_target]
lean_exe «ariori» where
  root := `ArioriFull
