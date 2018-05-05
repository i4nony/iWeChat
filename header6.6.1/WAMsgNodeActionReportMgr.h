//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WAMsgNodeActionReportMgr : MMService <PBMessageObserverDelegate, MMService>
{
    NSMutableDictionary *_coreId2ReportInfo;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)logAlarmReportForCore:(id)arg1 key:(long long)arg2;
- (void)logJSApiCallForCore:(id)arg1 withName:(id)arg2;
- (void)reportForCore:(id)arg1;
- (void)stopLogForCore:(id)arg1;
- (void)logActionForCore:(id)arg1 withActionInfo:(id)arg2;
- (void)logActionForCore:(id)arg1 withType:(int)arg2;
- (void)startLogForCore:(id)arg1 withStatId:(id)arg2 debugMode:(unsigned int)arg3 serviceType:(long long)arg4;
- (void)dealloc;
- (void)onServiceReloadData;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
