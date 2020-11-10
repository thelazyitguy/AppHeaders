//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFPlaylistGeneration/NSCopying-Protocol.h>
#import <NFPlaylistGeneration/NSSecureCoding-Protocol.h>

@class NSString;

@interface KeyUrlDetails : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_trackName;
    unsigned long long _videoHeight;
    unsigned long long _videoWidth;
    long long _contentProfileEnumValue;
    long long _mediaTypeEnumValue;
    unsigned long long _requestedIndex;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long requestedIndex; // @synthesize requestedIndex=_requestedIndex;
@property(nonatomic) long long mediaTypeEnumValue; // @synthesize mediaTypeEnumValue=_mediaTypeEnumValue;
@property(nonatomic) long long contentProfileEnumValue; // @synthesize contentProfileEnumValue=_contentProfileEnumValue;
@property(nonatomic) unsigned long long videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) unsigned long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(retain, nonatomic) NSString *trackName; // @synthesize trackName=_trackName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithSecureCoder:(id)arg1;

@end
