//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface STPAppInfo : NSObject
{
    NSString *_name;
    NSString *_partnerId;
    NSString *_version;
    NSString *_url;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 partnerId:(id)arg2 version:(id)arg3 url:(id)arg4;

@end

