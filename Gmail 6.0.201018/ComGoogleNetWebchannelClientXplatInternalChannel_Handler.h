//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleNetWebchannelClientXplatWebChannelBase_Handler.h"

@class ComGoogleNetWebchannelClientAsyncWebChannel_EventHandler, ComGoogleNetWebchannelClientXplatSupport_Debugger, NSString;

@interface ComGoogleNetWebchannelClientXplatInternalChannel_Handler : ComGoogleNetWebchannelClientXplatWebChannelBase_Handler
{
    NSString *url_;
    ComGoogleNetWebchannelClientXplatSupport_Debugger *channelDebug_;
    ComGoogleNetWebchannelClientAsyncWebChannel_EventHandler *eventHandler_;
}

- (void)dealloc;
- (void)channelHandleArrayWithComGoogleNetWebchannelClientXplatWebChannelBase:(id)arg1 withId:(id)arg2 withNSString:(id)arg3;
- (void)channelErrorWithComGoogleNetWebchannelClientXplatWebChannelBase:(id)arg1 withComGoogleNetWebchannelClientXplatWebChannelBase_ErrorEnum:(id)arg2;
- (void)channelClosedWithComGoogleNetWebchannelClientXplatWebChannelBase:(id)arg1 withJavaUtilList:(id)arg2 withJavaUtilList:(id)arg3;
- (void)channelOpenedWithComGoogleNetWebchannelClientXplatWebChannelBase:(id)arg1;

@end
