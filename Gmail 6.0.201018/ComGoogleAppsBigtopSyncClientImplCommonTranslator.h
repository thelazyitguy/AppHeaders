//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JBTTranslationEngine;

@interface ComGoogleAppsBigtopSyncClientImplCommonTranslator : NSObject
{
    id <JBTTranslationEngine> translationEngine_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getPluralTextWithJCSSmartMailTextId:(id)arg1 withInt:(int)arg2 withNSStringArray:(id)arg3;
- (id)getTextWithJCSSmartMailTextId:(id)arg1 withNSStringArray:(id)arg2;

@end
