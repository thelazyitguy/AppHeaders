//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FIRCLSMachOSlice : NSObject
{
    struct FIRCLSMachOSlice _slice;
    NSString *_uuidString;
    NSArray *_linkedDylibs;
    CDStruct_e24ffa00 _minimumOSVersion;
    CDStruct_e24ffa00 _linkedSDKVersion;
}

+ (id)runningSlice;
@property(readonly, nonatomic) CDStruct_e24ffa00 linkedSDKVersion; // @synthesize linkedSDKVersion=_linkedSDKVersion;
@property(readonly, nonatomic) CDStruct_e24ffa00 minimumOSVersion; // @synthesize minimumOSVersion=_minimumOSVersion;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *linkedDylibs;
@property(readonly, copy, nonatomic) NSString *uuid;
@property(readonly, copy, nonatomic) NSString *architectureName;
- (id)initWithSlice:(struct FIRCLSMachOSlice *)arg1;

@end
