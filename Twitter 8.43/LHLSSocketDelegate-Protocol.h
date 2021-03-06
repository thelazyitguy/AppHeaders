//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LHLSLib/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol LHLSSocketDelegate <NSObject>
- (void)freeaddrinfo:(struct addrinfo *)arg1;
- (int)getaddrinfo:(const char *)arg1 service:(const char *)arg2 hints:(const struct addrinfo *)arg3 res:(struct addrinfo **)arg4;
- (void)close:(int)arg1;
- (int)socket:(int)arg1 type:(int)arg2 protocol:(int)arg3;
- (long long)sendto:(int)arg1 buf:(const void *)arg2 len:(unsigned long long)arg3 flags:(int)arg4 dest_addr:(const struct sockaddr *)arg5 addrlen:(unsigned int)arg6 error:(int *)arg7;
- (long long)send:(int)arg1 buf:(const void *)arg2 len:(unsigned long long)arg3 flags:(int)arg4 error:(int *)arg5;
- (long long)recvfrom:(int)arg1 buf:(void *)arg2 len:(unsigned long long)arg3 flags:(int)arg4 src_addr:(struct sockaddr *)arg5 addrlen:(unsigned int *)arg6;
- (int)setsockopt:(int)arg1 level:(int)arg2 optname:(int)arg3 optval:(const void *)arg4 optlen:(unsigned int)arg5;
- (int)getsockopt:(int)arg1 level:(int)arg2 optname:(int)arg3 optval:(void *)arg4 optlen:(unsigned int *)arg5;
- (int)getsockname:(int)arg1 addr:(struct sockaddr *)arg2 addrlen:(unsigned int *)arg3;
- (int)connect:(int)arg1 addr:(const struct sockaddr *)arg2 addrlen:(unsigned int)arg3;
- (void)cancelReceiveSource;
- (void)createReceiveSourceWithQueue:(NSObject<OS_dispatch_queue> *)arg1 sockfd:(int)arg2 block:(void (^)(unsigned long long))arg3;
- (void)cancelSendSource;
- (void)resumeSendSource;
- (void)createSendSourceWithQueue:(NSObject<OS_dispatch_queue> *)arg1 sockfd:(int)arg2 block:(_Bool (^)(void))arg3;
@end

