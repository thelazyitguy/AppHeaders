//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/NSCopying-Protocol.h>
#import <T1Twitter/TFSModel-Protocol.h>

@class NSDate, NSString, TFNTwitterMultiResolutionImageSourceExternalURLs, UIColor;

@interface TFNTwitterSticker : NSObject <NSCoding, NSCopying, TFSModel>
{
    NSString *_stickerID;
    unsigned long long _stickerType;
    NSString *_annotationID;
    NSString *_stickerSetAnnotationID;
    NSString *_groupAnnotationID;
    TFNTwitterMultiResolutionImageSourceExternalURLs *_imageSource;
    double _aspectRatio;
    NSString *_authorID;
    NSString *_displayName;
    NSString *_displayDescription;
    NSDate *_startTime;
    NSDate *_endTime;
    NSString *_variantName;
    UIColor *_dominantColor;
    UIColor *_backgroundColor;
}

+ (unsigned long long)_stickerTypeForString:(id)arg1;
+ (id)stickerWithJSONDictionary:(id)arg1 error:(out id *)arg2;
+ (id)stickerWithJSONData:(id)arg1 error:(out id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *dominantColor; // @synthesize dominantColor=_dominantColor;
@property(readonly, nonatomic) NSString *variantName; // @synthesize variantName=_variantName;
@property(readonly, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSString *displayDescription; // @synthesize displayDescription=_displayDescription;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *authorID; // @synthesize authorID=_authorID;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) TFNTwitterMultiResolutionImageSourceExternalURLs *imageSource; // @synthesize imageSource=_imageSource;
@property(readonly, nonatomic) NSString *groupAnnotationID; // @synthesize groupAnnotationID=_groupAnnotationID;
@property(readonly, nonatomic) NSString *stickerSetAnnotationID; // @synthesize stickerSetAnnotationID=_stickerSetAnnotationID;
@property(readonly, nonatomic) NSString *annotationID; // @synthesize annotationID=_annotationID;
@property(readonly, nonatomic) unsigned long long stickerType; // @synthesize stickerType=_stickerType;
@property(readonly, nonatomic) NSString *stickerID; // @synthesize stickerID=_stickerID;
- (struct CGAffineTransform)initialTransformForImageAspectRatio:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)saturatedColor;
- (id)fadedColor;
@property(readonly, nonatomic, getter=isAvailableForCreation) _Bool availableForCreation;
- (id)initWithStickerID:(id)arg1 stickerType:(unsigned long long)arg2 annotationID:(id)arg3 groupAnnotationID:(id)arg4 stickerSetAnnotationID:(id)arg5 imageSource:(id)arg6 aspectRatio:(double)arg7 dominantColor:(id)arg8 backgroundColor:(id)arg9 authorID:(id)arg10 displayName:(id)arg11 displayDescription:(id)arg12 startTime:(id)arg13 endTime:(id)arg14 variantName:(id)arg15;
- (id)initWithStickerID:(id)arg1 imageSource:(id)arg2 aspectRatio:(double)arg3 dominantColor:(id)arg4 backgroundColor:(id)arg5 authorID:(id)arg6;
- (id)init;

@end

