//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSDataModelsConvertersMessageConverter, DYNSDataUiBotResponseConverter, DYNSDataUiReactionConverter;
@protocol DYNSSyncStatePendingMessagesState;

@interface DYNSDataUiMessageConverter : NSObject
{
    DYNSDataModelsConvertersMessageConverter *messageConverter_;
    id <DYNSSyncStatePendingMessagesState> pendingMessagesState_;
    DYNSDataUiBotResponseConverter *uiBotResponseConverter_;
    DYNSDataUiReactionConverter *uiReactionConverter_;
}

+ (void)initialize;
- (void)dealloc;
- (id)convertWithDYNSDataModelsMessage:(id)arg1;
- (id)fromProtosWithJavaUtilList:(id)arg1;
- (id)fromProtoWithDYNProtoMessage:(id)arg1;
- (id)convertAllAndReverseListWithJavaUtilList:(id)arg1;
- (id)convertAllWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2;
- (id)convertAllWithJavaUtilList:(id)arg1;

@end
