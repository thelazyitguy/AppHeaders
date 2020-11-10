//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFCW444/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GCKBSystemInfo : NSObject <NSCopying>
{
    _Bool _isSimulator;
    NSString *_systemName;
    NSString *_systemVersion;
    NSString *_deviceModel;
    NSString *_deviceName;
    NSString *_hardwareModel;
    NSString *_countryCode;
    unsigned long long _physicalMemoryMB;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isSimulator; // @synthesize isSimulator=_isSimulator;
@property(nonatomic) unsigned long long physicalMemoryMB; // @synthesize physicalMemoryMB=_physicalMemoryMB;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithSystemName:(id)arg1 systemVersion:(id)arg2 deviceModel:(id)arg3 deviceName:(id)arg4 hardwareModel:(id)arg5 countryCode:(id)arg6 physicalMemoryMB:(unsigned long long)arg7 isSimulator:(_Bool)arg8;

@end

