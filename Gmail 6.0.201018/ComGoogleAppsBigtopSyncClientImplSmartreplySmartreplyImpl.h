//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTSmartreply-Protocol.h"

@class ComGoogleCommonCollectImmutableList, JBTSmartreply_Type, NSString;
@protocol JBTRichText;

@interface ComGoogleAppsBigtopSyncClientImplSmartreplySmartreplyImpl : NSObject <JBTSmartreply>
{
    JBTSmartreply_Type *type_;
    id <JBTRichText> reason_;
    NSString *calendarUrl_;
    ComGoogleCommonCollectImmutableList *suggestions_;
    int dropCandidateIndex_;
    long long calendarSuggestionDateMs_;
}

+ (void)initialize;
- (void)dealloc;
- (int)getDropCandidateIndex;
- (long long)getCalendarSuggestionDateMs;
- (id)getCalendarUrl;
- (id)getReason;
- (id)getCalendarReason;
- (id)getType;
- (id)getSuggestions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
