//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LicenseChallenge, NSDictionary, NSError, NSString;

@interface LicenseChallengeResponse : NSObject
{
    _Bool _limitedDurationLicense;
    NSDictionary *_responsePayload;
    NSString *_responseMediaSessionId;
    NSError *_responseError;
    LicenseChallenge *_licenseChallenge;
}

+ (id)responseArrayWithLicenseChallengeArray:(id)arg1 ldl:(_Bool)arg2;
+ (id)responseWithLicenseChallenge:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) LicenseChallenge *licenseChallenge; // @synthesize licenseChallenge=_licenseChallenge;
@property(nonatomic, getter=isLimitedDurationLicense) _Bool limitedDurationLicense; // @synthesize limitedDurationLicense=_limitedDurationLicense;
@property(retain, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(retain, nonatomic) NSString *responseMediaSessionId; // @synthesize responseMediaSessionId=_responseMediaSessionId;
@property(retain, nonatomic) NSDictionary *responsePayload; // @synthesize responsePayload=_responsePayload;
- (id)responseLicense;

@end
