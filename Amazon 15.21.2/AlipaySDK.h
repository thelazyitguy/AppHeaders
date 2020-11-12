//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIWindow;

@interface AlipaySDK : NSObject
{
    _Bool _stopPayIn2S;
    _Bool _stopAuthIn2S;
    _Bool _stopFetchConfig;
    UIWindow *_targetWindow;
    NSString *_schemeStr;
    NSString *_executingOrderStr;
    CDUnknownBlockType _completionBlock;
    NSDictionary *_alertOkAction;
    NSDictionary *_alertCancelAction;
    unsigned long long _areaType;
}

+ (id)defaultService;
@property(nonatomic) unsigned long long areaType; // @synthesize areaType=_areaType;
@property(nonatomic) _Bool stopFetchConfig; // @synthesize stopFetchConfig=_stopFetchConfig;
@property(nonatomic) _Bool stopAuthIn2S; // @synthesize stopAuthIn2S=_stopAuthIn2S;
@property(nonatomic) _Bool stopPayIn2S; // @synthesize stopPayIn2S=_stopPayIn2S;
@property(retain, nonatomic) NSDictionary *alertCancelAction; // @synthesize alertCancelAction=_alertCancelAction;
@property(retain, nonatomic) NSDictionary *alertOkAction; // @synthesize alertOkAction=_alertOkAction;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSString *executingOrderStr; // @synthesize executingOrderStr=_executingOrderStr;
@property(copy, nonatomic) NSString *schemeStr; // @synthesize schemeStr=_schemeStr;
@property(nonatomic) __weak UIWindow *targetWindow; // @synthesize targetWindow=_targetWindow;
- (void).cxx_destruct;
- (id)buildQueryStrWithOrder:(id)arg1 andExtraInfo:(id)arg2;
- (id)currentVersion;
- (void)removeAlipayObserver;
- (void)cleanInfoWhenGoPortal:(id)arg1;
- (void)cleanData;
- (id)valueFromResult:(id)arg1 withKey:(id)arg2 isNewModel:(_Bool)arg3;
- (_Bool)isNewModelResult:(id)arg1;
- (void)callback:(CDUnknownBlockType)arg1 withMemo:(id)arg2 andResultStatus:(id)arg3;
- (void)callbackWithResult:(id)arg1;
- (id)dictionaryFromRegular:(id)arg1 pattern:(id)arg2;
- (void)processResultUrl:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)processAuth_V2Result:(id)arg1 standbyCallback:(CDUnknownBlockType)arg2;
- (void)auth_V2WithInfo:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)isShouldInterceptorDomain:(id)arg1;
- (id)fetchOrderInfoFromH5PayUrl:(id)arg1;
- (void)payUrlOrder:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (unsigned long long)area4OrderStr:(id)arg1;
- (_Bool)checkValidityWithOrderStr:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)callAlipayByUL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)callAlipayBySchemes:(id)arg1 orderStr:(id)arg2;
- (void)callAlipayWithOrderStr:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)payWithType:(id)arg1 orderStr:(id)arg2 schemeStr:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)processOrderWithPaymentResult:(id)arg1 standbyCallback:(CDUnknownBlockType)arg2;
- (_Bool)payInterceptorWithUrl:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)payOrder:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;

@end
