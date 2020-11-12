//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFModelProtocol-Protocol.h>

@class NSString, NSURLSessionDataTask, UIImage;
@protocol IFChannelLinkModelController, IFChannelProtocol;

@interface IFChannelLinkModel : NSObject <IFModelProtocol>
{
    NSObject<IFChannelLinkModelController> *_controller;
    UIImage *_image;
    NSString *_name;
    NSString *_channelDescription;
    NSString *_permalink;
    NSObject<IFChannelProtocol> *_chatEntity;
    NSURLSessionDataTask *_dataTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) NSObject<IFChannelProtocol> *chatEntity; // @synthesize chatEntity=_chatEntity;
@property(retain, nonatomic) NSString *permalink; // @synthesize permalink=_permalink;
@property(retain, nonatomic) NSString *channelDescription; // @synthesize channelDescription=_channelDescription;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) __weak NSObject<IFChannelLinkModelController> *controller; // @synthesize controller=_controller;
- (_Bool)updatePermalink:(id)arg1;
- (_Bool)checkPermalink:(id)arg1;
- (void)cancelChecking;
@property(readonly, nonatomic) _Bool isCreatingNew;
- (id)chatsService;
- (id)initWithChatEntity:(id)arg1;
- (id)initWithChannelName:(id)arg1 image:(id)arg2 description:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
