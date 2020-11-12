//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ISSSuggestionsMapper : NSObject
{
}

+ (id)mapTemplateData:(id)arg1 rawSuggestion:(id)arg2;
+ (id)mapV2SearchCompletions:(id)arg1 searchAlias:(id)arg2 keywords:(id)arg3;
+ (id)mapV2SearchCompletionsWithPastSearches:(id)arg1 rawCompletions:(id)arg2 searchAlias:(id)arg3 keywords:(id)arg4;
+ (id)mapSearchCompletionsWithPastSearches:(id)arg1 rawCompletions:(id)arg2 searchAlias:(id)arg3 keywords:(id)arg4;
+ (id)mapPastSearchesWithKeywords:(id)arg1 rawSuggestions:(id)arg2;
+ (id)filterSearchSuggestions:(id)arg1;
+ (id)mapV2SearchSuggestionsWithKeywords:(id)arg1 searchAlias:(id)arg2 rawCompletions:(id)arg3;
+ (id)mapV2SearchSuggestionsWithKeywords:(id)arg1 searchAlias:(id)arg2 rawCompletions:(id)arg3 rawSuggestions:(id)arg4;
+ (id)mapSearchSuggestionsWithKeywords:(id)arg1 searchAlias:(id)arg2 rawCompletions:(id)arg3 rawSuggestions:(id)arg4;

@end
