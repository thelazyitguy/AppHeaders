//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface SPTHubsKitImageData : NSObject <NSCopying, NSMutableCopying>
{
    NSURL *_url;
    NSString *_placeholderIconIdentifier;
    NSDictionary *_customData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *customData; // @synthesize customData=_customData;
@property(copy, nonatomic) NSString *placeholderIconIdentifier; // @synthesize placeholderIconIdentifier=_placeholderIconIdentifier;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (_Bool)isEqualToImageData:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 placeholderIconIdentifier:(id)arg2 customData:(id)arg3;
- (id)initWithURL:(id)arg1;

@end

