//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$s7SlackUI15SLKBaseTextViewCN.h"

@class NSAttributedString;

@interface _TtC5Slack23SLKAutocompleteTextView : _$s7SlackUI15SLKBaseTextViewCN
{
    // Error parsing type: , name: presentationDelegate
    // Error parsing type: , name: autocompleteParameters
    // Error parsing type: , name: resultsVisibilityPreference
    // Error parsing type: , name: fontForAttributedInput
    // Error parsing type: , name: preferredTypingAttributes
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: autocompleteResultsPresentable
    // Error parsing type: , name: autocompleteCommandUsagePresentable
    // Error parsing type: , name: allFoundAutocompleteParsingResults
    // Error parsing type: , name: currentSelectedAutocompleteParsingResult
    // Error parsing type: , name: currentLeadingCommandParsingResult
    // Error parsing type: , name: validCategories
    // Error parsing type: , name: expectedText
    // Error parsing type: , name: attributedTextBeforeSelectionChange
    // Error parsing type: , name: additionalModifierRegexes
    // Error parsing type: , name: autocompleteMetrics
    // Error parsing type: , name: autoSlugger
    // Error parsing type: , name: shouldApplyFont
    // Error parsing type: , name: wysiwygComposerEnabled
    // Error parsing type: , name: attributedTextCoordinator
    // Error parsing type: , name: emojiLookupUtility
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)textUpdatedWithText:(id)arg1 originalText:(id)arg2 autoSlugger:(id)arg3;
- (void)handleTextChangeWithNewAttributedText:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) NSAttributedString *attributedText;

@end
