//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTUnknownEntityModel.h>

#import <Module_Framework/YTMutableEntity-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface YTMutableUnknownEntityModel : YTUnknownEntityModel <YTMutableEntity>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(copy, nonatomic) NSDictionary *entityMetadata;
@property(readonly, copy, nonatomic) NSData *entityVersion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
