//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, XNOAssetRegistryProto_AssetLocation_BuiltInPathInfo, XNOAssetRegistryProto_AssetLocation_RemoteFileSet, XNOAssetRegistryProto_AssetLocation_RemoteFileSetArchive;

@interface XNOAssetRegistryProto_AssetLocation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) XNOAssetRegistryProto_AssetLocation_BuiltInPathInfo *builtInPathInfo; // @dynamic builtInPathInfo;
@property(nonatomic) _Bool hasBuiltInPathInfo; // @dynamic hasBuiltInPathInfo;
@property(retain, nonatomic) XNOAssetRegistryProto_AssetLocation_RemoteFileSet *remoteFileSet; // @dynamic remoteFileSet;
@property(retain, nonatomic) XNOAssetRegistryProto_AssetLocation_RemoteFileSetArchive *remoteFileSetArchive; // @dynamic remoteFileSetArchive;
@property(readonly, nonatomic) int remoteInfoOneOfCase; // @dynamic remoteInfoOneOfCase;
@property(copy, nonatomic) NSString *remoteURL; // @dynamic remoteURL;

@end

