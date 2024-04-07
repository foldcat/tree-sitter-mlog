package tree_sitter_mlog_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-mlog"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mlog.Language())
	if language == nil {
		t.Errorf("Error loading Mlog grammar")
	}
}
