//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NSObject-Protocol.h>

@class NSData, NSError, NflxConnection;

@protocol NflxConnectionDelegate <NSObject>
- (void)connectionWasTerminated:(NflxConnection *)arg1;
- (void)connection:(NflxConnection *)arg1 didReceiveError:(NSError *)arg2;
- (void)connection:(NflxConnection *)arg1 didReceiveData:(NSData *)arg2;
@end

