//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LCAudioDeviceInfo : NSObject
{
    _Bool _isDefault;
    NSString *_id;
    NSString *_name;
    long long _type;
}

+ (id)audioDeviceInfoWithId:(id)arg1 name:(id)arg2 type:(long long)arg3 isDefault:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (id)description;
- (id)initWithId:(id)arg1 name:(id)arg2 type:(long long)arg3 isDefault:(_Bool)arg4;

@end

