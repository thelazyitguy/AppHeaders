//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLShanYanGetMobileCodeModel : NSObject
{
    NSString *_accessCode;
    NSString *_number;
    double _createTime;
    double _cl_config_expiredTime;
    unsigned long long _telecomChannel;
}

@property(nonatomic) unsigned long long telecomChannel; // @synthesize telecomChannel=_telecomChannel;
@property(nonatomic) double cl_config_expiredTime; // @synthesize cl_config_expiredTime=_cl_config_expiredTime;
@property(readonly, nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
@property(copy, nonatomic) NSString *accessCode; // @synthesize accessCode=_accessCode;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *telecomChannelString;
@property(readonly, nonatomic) _Bool hasOutTime;
- (id)init;

@end
