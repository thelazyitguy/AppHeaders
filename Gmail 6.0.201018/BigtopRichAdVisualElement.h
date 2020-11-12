//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BigtopAdVisualElement.h"

@protocol JBTAd;

@interface BigtopRichAdVisualElement : BigtopAdVisualElement
{
    id <JBTAd> _ad;
    _Bool _isImageVisible;
    double _imageAspectRatio;
    _Bool _isDisplayUrlVisible;
    _Bool _isDescriptionEllipsized;
    _Bool _fetchedImageSucceeded;
    _Bool _fetchedImageWasCached;
    double _fetchedImageLoadLatency;
    long long _fetchedImageSizeBytes;
}

- (void).cxx_destruct;
- (void)writeBigtopMetadataToProto:(id)arg1;
- (id)initWithTag:(CDStruct_a9c8ee48)arg1 parentVisualElement:(id)arg2 ad:(id)arg3 isImageVisible:(_Bool)arg4 imageAspectRatio:(double)arg5 isDisplayUrlVisible:(_Bool)arg6 isDescriptionEllipsized:(_Bool)arg7 fetchedImageSucceeded:(_Bool)arg8 fetchedImageWasCached:(_Bool)arg9 fetchedImageLoadLatency:(double)arg10 fetchedImageSizeBytes:(long long)arg11;

@end
