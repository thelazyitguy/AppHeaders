//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsXplatHttpIosNsUrlRequest_Builder.h"

@class ComGoogleCommonCollectImmutableList, IOSByteArray, JavaLangInteger, NSString;

@interface ComGoogleAppsXplatHttpAutoValue_IosNsUrlRequest_Builder : ComGoogleAppsXplatHttpIosNsUrlRequest_Builder
{
    NSString *url_;
    NSString *verb_;
    ComGoogleCommonCollectImmutableList *headers_;
    IOSByteArray *postData_;
    JavaLangInteger *timeoutMillis_;
}

- (void)dealloc;
- (id)build;
- (id)setTimeoutMillisWithInt:(int)arg1;
- (id)setPostDataWithByteArray:(id)arg1;
- (id)setHeadersWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)setVerbWithNSString:(id)arg1;
- (id)setUrlWithNSString:(id)arg1;

@end

