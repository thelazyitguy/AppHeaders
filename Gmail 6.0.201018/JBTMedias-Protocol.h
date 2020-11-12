//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JBTCBigTopCommonEnums_Metric, JBTMediaList_Type, JBTMedia_MediaType, NSString;
@protocol JBTClientProvidedMedia_Builder, JBTCloudMediaObject_Builder, JBTImage, JBTLiveList, JBTMedia, JavaUtilList;

@protocol JBTMedias <JavaObject>
- (JBTCBigTopCommonEnums_Metric *)getAggregatedMediaSharingMetricWithJavaUtilList:(id <JavaUtilList>)arg1;
- (JBTCBigTopCommonEnums_Metric *)getMediaSharingMetricWithJBTMedia:(id <JBTMedia>)arg1;
- (id <JBTCloudMediaObject_Builder>)getCloudMediaObjectBuilder;
- (id <JBTImage>)createImageWithNSString:(NSString *)arg1;
- (id <JBTClientProvidedMedia_Builder>)getClientProvidedMediaBuilderWithNSString:(NSString *)arg1 withJBTMedia_MediaType:(JBTMedia_MediaType *)arg2 withNSString:(NSString *)arg3;
- (JBTCBigTopCommonEnums_Metric *)getMediaListTypeMetricWithJBTMediaList_Type:(JBTMediaList_Type *)arg1;
- (id <JBTLiveList>)getMediaLists;
- (id <JavaUtilList>)getMediaListTypes;
@end
