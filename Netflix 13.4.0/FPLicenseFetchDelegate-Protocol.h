//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FPLicenseFetch, NSArray, NSDictionary, NSError;

@protocol FPLicenseFetchDelegate
- (void)fpLicenseFetchDidEndLicenseRequest:(FPLicenseFetch *)arg1 ldl:(_Bool)arg2;
- (void)fpLicenseFetchWillStartLicenseRequest:(FPLicenseFetch *)arg1 withRequestArguments:(NSDictionary *)arg2 ldl:(_Bool)arg3;
- (void)fpLicenseFetch:(FPLicenseFetch *)arg1 didReceiveLicenseChallengeResponses:(NSArray *)arg2 rawResponse:(NSArray *)arg3 error:(NSError *)arg4;
@end

