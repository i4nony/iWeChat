//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "JSApiScopeConfirmWindowDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class JSApiScopeConfirmWindow, MMUIViewController, NSString;

@interface WebViewOAuthLogic : MMObject <PBMessageObserverDelegate, JSApiScopeConfirmWindowDelegate>
{
    CDUnknownBlockType _completeBlock;
    MMUIViewController *_vc;
    JSApiScopeConfirmWindow *_confirmWindow;
    NSString *_oauthUrl;
    _Bool _needNotifySvrWhenConfirm;
    NSString *_confirmRediretUrl;
    _Bool _isAuthing;
}

@property(nonatomic) _Bool isAuthing; // @synthesize isAuthing=_isAuthing;
- (void).cxx_destruct;
- (void)onScopeWindowCancel:(id)arg1;
- (void)onScopeWindowConfirm:(id)arg1 withScope:(id)arg2;
- (void)sendConfirmOprationToSvrWithScopes:(id)arg1;
- (void)sendCancelOprationToSvr;
- (void)handleConfirmResponse:(id)arg1;
- (void)handleOauthResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onConfirmViewCancel;
- (void)onConfirmViewOKWithScope:(id)arg1;
- (void)closeConfirmWindow;
- (void)showConfirmWindow:(id)arg1 appName:(id)arg2 iconUrl:(id)arg3;
- (void)reset;
- (void)startOAuthWithUrl:(id)arg1 userName:(id)arg2 scene:(int)arg3 viewController:(id)arg4 completeBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
