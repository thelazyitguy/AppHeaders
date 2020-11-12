//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTIFormattedTextParser-Protocol.h"

@class NSString;
@protocol JBTISmartMailTimeHelper, JBTISmartMailTranslationHelper;

@interface ComGoogleAppsBigtopSyncClientImplSmartmailCommonFormattedTextParserImpl : NSObject <JBTIFormattedTextParser>
{
    id <JBTISmartMailTimeHelper> timeHelper_;
    id <JBTISmartMailTranslationHelper> translationHelper_;
}

+ (void)initialize;
- (void)dealloc;
- (id)formattedTextToTextRegionsWithJCSFormattedText:(id)arg1 withJBTTextRegion_AdjectiveArray:(id)arg2;
- (id)formattedTextToRichTextWithJCSFormattedText:(id)arg1 withJBTTextRegion_AdjectiveArray:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
