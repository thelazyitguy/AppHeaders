//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsAssistantClientApiInlineassistAutocorrectAutocorrectInlineAssistanceOpportunityData_Builder.h"

@class ComGoogleCommonBaseOptional, NSString;

@interface ComGoogleAppsAssistantClientApiInlineassistAutocorrect_AutoValue_AutocorrectInlineAssistanceOpportunityData_Builder : ComGoogleAppsAssistantClientApiInlineassistAutocorrectAutocorrectInlineAssistanceOpportunityData_Builder
{
    ComGoogleCommonBaseOptional *textChangeSuggestion_;
    NSString *hint_;
    NSString *misspelling_;
    NSString *strategy_;
}

- (void)dealloc;
- (id)build;
- (id)setStrategyWithNSString:(id)arg1;
- (id)setMisspellingWithNSString:(id)arg1;
- (id)setHintWithNSString:(id)arg1;
- (id)setTextChangeSuggestionWithComGoogleCommonBaseOptional:(id)arg1;

@end
