//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplCommonFeedbackloggingApiFeedbackLogger-Protocol.h"
#import "JavaObject-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplProducersChangeListMetadata, ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableSet, JBTFetchMode, JBTISmartMailAccordionData, JBTSection_Type;
@protocol ComGoogleAppsBigtopSyncClientImplCommonInteractionRecorder, ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory, JBTConversationMessageList, JBTId;

@protocol ComGoogleAppsBigtopSyncClientImplConversationsFactoryApiConversationMessageListFactory <ComGoogleAppsBigtopSyncClientImplCommonFeedbackloggingApiFeedbackLogger, JavaObject>
- (id <JBTConversationMessageList>)createConversationMessageListWithJBTId:(id <JBTId>)arg1 withComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)arg2 withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet *)arg3 withComGoogleAppsBigtopSyncClientImplProducersChangeListMetadata:(ComGoogleAppsBigtopSyncClientImplProducersChangeListMetadata *)arg4 withJBTSection_Type:(JBTSection_Type *)arg5 withInt:(int)arg6 withComGoogleAppsBigtopSyncClientImplCommonInteractionRecorder:(id <ComGoogleAppsBigtopSyncClientImplCommonInteractionRecorder>)arg7 withJBTISmartMailAccordionData:(JBTISmartMailAccordionData *)arg8 withJBTFetchMode:(JBTFetchMode *)arg9 withComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory:(id <ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory>)arg10 withComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)arg11;
@end

