//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterCrashlytics/NSCopying-Protocol.h>
#import <TwitterCrashlytics/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface FIRInstallationsStoredAuthToken : NSObject <NSSecureCoding, NSCopying>
{
    long long _status;
    NSString *_token;
    NSDate *_expirationDate;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy) NSString *token; // @synthesize token=_token;
@property long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long storageVersion;

@end

