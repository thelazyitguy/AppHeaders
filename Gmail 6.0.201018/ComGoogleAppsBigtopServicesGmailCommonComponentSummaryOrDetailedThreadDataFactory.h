//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopServicesGmailCommonComponentDetailedThreadDataFactory, ComGoogleAppsBigtopServicesGmailCommonComponentSummaryThreadDataFactory;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopServicesGmailCommonComponentSummaryOrDetailedThreadDataFactory : NSObject
{
    id <JavaxInjectProvider> messageVisibilityHelperFactoryProvider_;
    ComGoogleAppsBigtopServicesGmailCommonComponentDetailedThreadDataFactory *detailedThreadDataFactory_;
    ComGoogleAppsBigtopServicesGmailCommonComponentSummaryThreadDataFactory *summaryThreadDataFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (id)createForTestsWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1;
- (id)createWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1 withComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelper:(id)arg2;

@end
