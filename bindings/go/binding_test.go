package tree_sitter_LC3Assembly_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-LC3Assembly"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_LC3Assembly.Language())
	if language == nil {
		t.Errorf("Error loading Lc3Assembly grammar")
	}
}
