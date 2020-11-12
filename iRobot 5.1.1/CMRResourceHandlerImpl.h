//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePlatform/CMRResourceHandler-Protocol.h>

@class NSDictionary, NSString;

@interface CMRResourceHandlerImpl : NSObject <CMRResourceHandler>
{
    NSDictionary *_imageDictionary;
}

+ (id)UIColorFromARGB:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *imageDictionary; // @synthesize imageDictionary=_imageDictionary;
- (id)localize:(id)arg1;
- (id)getImageName:(long long)arg1;
- (id)createTextImage:(id)arg1 fontName:(id)arg2 fontSize:(float)arg3 fillColor:(long long)arg4 strokeWidth:(float)arg5 strokeColor:(long long)arg6;
- (id)getUIImage:(long long)arg1;
- (id)loadResource:(id)arg1 resourceType:(id)arg2;
- (id)loadImageResource:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
