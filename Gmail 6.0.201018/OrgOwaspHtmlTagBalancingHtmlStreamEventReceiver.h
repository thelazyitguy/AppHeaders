//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OrgOwaspHtmlHtmlStreamEventReceiver-Protocol.h"

@class NSString, OrgOwaspHtmlIntVector;
@protocol OrgOwaspHtmlHtmlStreamEventReceiver;

@interface OrgOwaspHtmlTagBalancingHtmlStreamEventReceiver : NSObject <OrgOwaspHtmlHtmlStreamEventReceiver>
{
    id <OrgOwaspHtmlHtmlStreamEventReceiver> underlying_;
    int nestingLimit_;
    OrgOwaspHtmlIntVector *openElements_;
    OrgOwaspHtmlIntVector *toResumeInReverse_;
}

+ (void)initialize;
- (void)dealloc;
- (void)textWithNSString:(id)arg1;
- (void)closeTagWithNSString:(id)arg1;
- (void)openTagWithNSString:(id)arg1 withJavaUtilList:(id)arg2;
- (void)closeDocument;
- (void)openDocument;
- (void)setNestingLimitWithInt:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
