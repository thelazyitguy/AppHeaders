//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MDXDeviceInfo : NSObject
{
    int _connectionType;
    NSString *_manufacturer;
    NSString *_modelName;
    NSString *_deviceVersion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *deviceVersion; // @synthesize deviceVersion=_deviceVersion;
@property(readonly, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(readonly, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
- (id)description;
- (id)initWithConnectionType:(int)arg1 manufacturer:(id)arg2 modelName:(id)arg3 deviceVersion:(id)arg4;

@end
