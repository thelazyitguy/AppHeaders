//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSUrlScottyUrlFactory-Protocol.h"
#import "DYNScottyUrlFactory-Protocol.h"

@class DYNSUrlScottyUrlUtil, NSString;

@interface DYNSUrlScottyUrlFactoryImpl : NSObject <DYNScottyUrlFactory, DYNSUrlScottyUrlFactory>
{
    DYNSUrlScottyUrlUtil *scottyUrlUtil_;
}

+ (void)initialize;
- (void)dealloc;
- (id)createViewUrlWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)createViewUrlWithNSString:(id)arg1 withNSString:(id)arg2 withJavaUtilOptional:(id)arg3;
- (id)createStreamingUrlFromProjectorConfigUrlWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)createStreamingUrlWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)createUploadUrlWithJavaUtilOptional:(id)arg1;
- (id)createThumbnailUrlWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)createThumbnailUrlWithNSString:(id)arg1 withNSString:(id)arg2 withJavaUtilOptional:(id)arg3 withJavaUtilOptional:(id)arg4;
- (id)createProjectorConfigUrlWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)createDownloadUrlWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)createViewUrlWithMimeType:(id)arg1 attachmentToken:(id)arg2 width:(double)arg3;
- (id)createViewUrlWithNSString_:(id)arg1 withNSString:(id)arg2;
- (id)createStreamingUrlFromProjectorConfigUrlWithNSString_:(id)arg1 withNSString:(id)arg2;
- (id)createStreamingUrlWithNSString_:(id)arg1 withNSString:(id)arg2;
- (id)createUploadUrlWithGroupId_:(id)arg1;
- (id)createThumbnailUrlWithNSString_:(id)arg1 withNSString:(id)arg2;
- (id)createThumbnailUrlWithNSString_:(id)arg1 withNSString:(id)arg2 withWidth:(long long)arg3 withHeight:(long long)arg4;
- (id)createProjectorConfigUrlWithNSString_:(id)arg1 withNSString:(id)arg2;
- (id)createDownloadUrlWithNSString_:(id)arg1 withNSString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
