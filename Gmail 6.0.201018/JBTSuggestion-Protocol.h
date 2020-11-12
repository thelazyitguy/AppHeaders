//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTItem-Protocol.h"
#import "JavaObject-Protocol.h"

@class JBTSuggestion_SuggestionType, NSString;
@protocol JBTCallback, JBTImageUrlSettings, JBTPersonalIntelligenceSuggestion, JBTQuery, JBTRichText, JBTSpan, JBTSuggestionPromo;

@protocol JBTSuggestion <JBTItem, JavaObject>
- (void)removeSelfWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (id <JBTPersonalIntelligenceSuggestion>)getPersonalIntelligenceSuggestion;
- (id <JBTSuggestionPromo>)getSuggestionPromo;
- (NSString *)getImageUrlWithJBTImageUrlSettings:(id <JBTImageUrlSettings>)arg1;
- (_Bool)hasProfilePicture;
- (id <JBTQuery>)getQuery;
- (id <JBTRichText>)getTitleRegions;
- (NSString *)getTitle;
- (JBTSuggestion_SuggestionType *)getSuggestionType;
@end
