//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSURL, UIImage;

@interface SubmittedPostGalleryItem : NSObject <NSSecureCoding>
{
    NSString *_caption;
    UIImage *_image;
    NSString *_imageFileName;
    NSDictionary *_imageUploadMetaData;
    NSURL *_linkURL;
    NSString *_mediaKey;
    NSURL *_outboundURL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *outboundURL; // @synthesize outboundURL=_outboundURL;
@property(retain, nonatomic) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(retain, nonatomic) NSURL *linkURL; // @synthesize linkURL=_linkURL;
@property(retain, nonatomic) NSDictionary *imageUploadMetaData; // @synthesize imageUploadMetaData=_imageUploadMetaData;
@property(retain, nonatomic) NSString *imageFileName; // @synthesize imageFileName=_imageFileName;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
