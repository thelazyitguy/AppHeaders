//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSingleton.h"

#import "ASMDeviceStatusRefresher-Protocol.h"

@interface ASMDataManagerRefresher : AWSingleton <ASMDeviceStatusRefresher>
{
}

+ (id)sharedInstance;
- (void)putData;
- (void)syncDeviceStatus:(id)arg1;
- (void)clearDeviceStatus:(id)arg1;

@end
