//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCoding-Protocol.h>

@class NSString, NSURL;

@interface _TtC10RedditCore11MediaSource : NSObject <NSCoding>
{
    // Error parsing type: , name: url
    // Error parsing type: , name: size
}

+ (id)bestMediaSourceFromResolutions:(id)arg1 fittingSize:(struct CGSize)arg2;
+ (id)resolutionsFromMetaAPIData:(id)arg1;
+ (id)resolutionsFromGraphQLData:(id)arg1 prefix:(id)arg2 omittingSource:(id)arg3 obfuscated:(_Bool)arg4;
+ (id)obfuscatedResolutionKeys;
+ (id)resolutionKeys;
- (void).cxx_destruct;
- (id)init;
- (long long)compareByHeight:(id)arg1;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRichtextMediaData:(id)arg1;
- (id)initWithGraphQLData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic, readonly) _Bool isLowResolution;
@property(nonatomic, readonly) _Bool isVertical;
@property(nonatomic, readonly) double aspectRatio;
@property(nonatomic, readonly) struct CGSize size; // @synthesize size;
@property(nonatomic, readonly) NSURL *url;

@end

