//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NSObject-Protocol.h>

@protocol MdxDevice;

@protocol MdxConnectionManager <NSObject>
- (void)connectionForDevice:(id <MdxDevice>)arg1 intent:(long long)arg2 callback:(void (^)(id <MdxConnection>, NSError *))arg3;
@end

