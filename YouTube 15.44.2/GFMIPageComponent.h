//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GFMIPageComponent : NSObject
{
    long long _type;
    NSString *_value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (id)initWithType:(long long)arg1 value:(id)arg2;

@end

