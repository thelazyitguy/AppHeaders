//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XPTClearcutAccount_Builder.h"

@class ComGoogleCommonBaseOptional, JavaLangBoolean;

@interface XPTAutoValue_ClearcutAccount_Builder : XPTClearcutAccount_Builder
{
    ComGoogleCommonBaseOptional *clearcutAccountGaiaIdentifier_;
    JavaLangBoolean *isAnonymous_;
    ComGoogleCommonBaseOptional *accountType_;
}

- (void)dealloc;
- (id)build;
- (id)accountTypeWithComGoogleCommonBaseOptional:(id)arg1;
- (id)isAnonymousWithBoolean:(_Bool)arg1;
- (id)clearcutAccountGaiaIdentifierWithComGoogleCommonBaseOptional:(id)arg1;

@end
