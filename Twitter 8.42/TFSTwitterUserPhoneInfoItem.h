//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFSTwitterUserPhoneInfoItem : NSObject
{
    _Bool _verified;
    NSString *_phoneNumber;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool verified; // @synthesize verified=_verified;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (id)init;
- (id)initWithJSONDictionary:(id)arg1;

@end

