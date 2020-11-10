//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;
@protocol MediaAsset;

@interface PostGalleryItem : NSObject <NSCopying>
{
    NSString *_caption;
    NSURL *_outboundURL;
    NSString *_displayAddress;
    NSString *_callToAction;
    NSDictionary *_adEventURLs;
    id <MediaAsset> _media;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <MediaAsset> media; // @synthesize media=_media;
@property(readonly, nonatomic) NSDictionary *adEventURLs; // @synthesize adEventURLs=_adEventURLs;
@property(readonly, nonatomic) NSString *callToAction; // @synthesize callToAction=_callToAction;
@property(readonly, nonatomic) NSString *displayAddress; // @synthesize displayAddress=_displayAddress;
@property(readonly, nonatomic) NSURL *outboundURL; // @synthesize outboundURL=_outboundURL;
@property(readonly, nonatomic) NSString *caption; // @synthesize caption=_caption;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAdEventsFromGraphQLData:(id)arg1;
- (id)mediaSourceFittingSize:(struct CGSize)arg1 obfuscated:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *obfuscated;
@property(readonly, nonatomic) NSArray *resolutions;
@property(readonly, nonatomic) NSString *mimeType;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *mediaId;
- (id)initWithData:(id)arg1 mediaMetadata:(id)arg2;
- (id)initWithGraphQLData:(id)arg1;

@end

