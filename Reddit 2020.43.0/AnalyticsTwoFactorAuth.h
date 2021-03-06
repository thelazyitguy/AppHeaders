//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsTwoFactorAuth : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _device_previous_remaining_backup_codesIsSet;
    _Bool _device_nameIsSet;
    _Bool _device_exists;
    _Bool _device_existsIsSet;
    _Bool _device_algorithmIsSet;
    _Bool _device_backup_codes_remainingIsSet;
    _Bool _backup_code_used;
    _Bool _backup_code_usedIsSet;
    _Bool _otp_embedded_in_password;
    _Bool _otp_embedded_in_passwordIsSet;
    int _device_backup_codes_remaining;
    long long _device_previous_remaining_backup_codes;
    NSString *_device_name;
    NSString *_device_algorithm;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool otp_embedded_in_passwordIsSet; // @synthesize otp_embedded_in_passwordIsSet=_otp_embedded_in_passwordIsSet;
@property(nonatomic) _Bool otp_embedded_in_password; // @synthesize otp_embedded_in_password=_otp_embedded_in_password;
@property(nonatomic) _Bool backup_code_usedIsSet; // @synthesize backup_code_usedIsSet=_backup_code_usedIsSet;
@property(nonatomic) _Bool backup_code_used; // @synthesize backup_code_used=_backup_code_used;
@property(nonatomic) _Bool device_backup_codes_remainingIsSet; // @synthesize device_backup_codes_remainingIsSet=_device_backup_codes_remainingIsSet;
@property(nonatomic) int device_backup_codes_remaining; // @synthesize device_backup_codes_remaining=_device_backup_codes_remaining;
@property(nonatomic) _Bool device_algorithmIsSet; // @synthesize device_algorithmIsSet=_device_algorithmIsSet;
@property(copy, nonatomic) NSString *device_algorithm; // @synthesize device_algorithm=_device_algorithm;
@property(nonatomic) _Bool device_existsIsSet; // @synthesize device_existsIsSet=_device_existsIsSet;
@property(nonatomic) _Bool device_exists; // @synthesize device_exists=_device_exists;
@property(nonatomic) _Bool device_nameIsSet; // @synthesize device_nameIsSet=_device_nameIsSet;
@property(copy, nonatomic) NSString *device_name; // @synthesize device_name=_device_name;
@property(nonatomic) _Bool device_previous_remaining_backup_codesIsSet; // @synthesize device_previous_remaining_backup_codesIsSet=_device_previous_remaining_backup_codesIsSet;
@property(nonatomic) long long device_previous_remaining_backup_codes; // @synthesize device_previous_remaining_backup_codes=_device_previous_remaining_backup_codes;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetOtp_embedded_in_password;
- (void)unsetBackup_code_used;
- (void)unsetDevice_backup_codes_remaining;
- (void)unsetDevice_algorithm;
- (void)unsetDevice_exists;
- (void)unsetDevice_name;
- (void)unsetDevice_previous_remaining_backup_codes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice_previous_remaining_backup_codes:(long long)arg1 device_name:(id)arg2 device_exists:(_Bool)arg3 device_algorithm:(id)arg4 device_backup_codes_remaining:(int)arg5 backup_code_used:(_Bool)arg6 otp_embedded_in_password:(_Bool)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

