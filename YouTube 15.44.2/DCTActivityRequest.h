//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface DCTActivityRequest : NSObject <NSCopying>
{
    NSString *_adUnitID;
    NSString *_publisherProvidedID;
    NSDictionary *_customParameters;
}

+ (id)requestWithAdUnitID:(id)arg1 publisherProvidedID:(id)arg2 customParameters:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *customParameters; // @synthesize customParameters=_customParameters;
@property(readonly, copy, nonatomic) NSString *publisherProvidedID; // @synthesize publisherProvidedID=_publisherProvidedID;
@property(readonly, copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdUnitID:(id)arg1 publisherProvidedID:(id)arg2 customParameters:(id)arg3;

@end

