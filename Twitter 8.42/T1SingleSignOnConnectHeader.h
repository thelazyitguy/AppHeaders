//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TIPImagePipeline;
@protocol TFSTwitterCanonicalUser;

@interface T1SingleSignOnConnectHeader : NSObject
{
    TIPImagePipeline *_imagePipeline;
    id <TFSTwitterCanonicalUser> _user;
    NSString *_appName;
    NSString *_organizationName;
    NSString *_appImageURLString;
    struct CGSize _appImageDimensions;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize appImageDimensions; // @synthesize appImageDimensions=_appImageDimensions;
@property(copy, nonatomic) NSString *appImageURLString; // @synthesize appImageURLString=_appImageURLString;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) id <TFSTwitterCanonicalUser> user; // @synthesize user=_user;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;

@end

