2023-09-20T18:22:04.5991440Z Requested labels: ubuntu-latest
2023-09-20T18:22:04.5991795Z Job defined at: gnmeyer/ColorHex/.github/workflows/c-cpp.yml@refs/heads/main
2023-09-20T18:22:04.5991933Z Waiting for a runner to pick up this job...
2023-09-20T18:22:05.1720215Z Job is waiting for a hosted runner to come online.
2023-09-20T18:22:09.2182748Z Job is about to start running on the hosted runner: GitHub Actions 1 (hosted)
2023-09-20T18:22:11.8297776Z Current runner version: '2.309.0'
2023-09-20T18:22:11.8331551Z ##[group]Operating System
2023-09-20T18:22:11.8332215Z Ubuntu
2023-09-20T18:22:11.8332615Z 22.04.3
2023-09-20T18:22:11.8332969Z LTS
2023-09-20T18:22:11.8333293Z ##[endgroup]
2023-09-20T18:22:11.8333861Z ##[group]Runner Image
2023-09-20T18:22:11.8334327Z Image: ubuntu-22.04
2023-09-20T18:22:11.8334695Z Version: 20230911.1.0
2023-09-20T18:22:11.8335355Z Included Software: https://github.com/actions/runner-images/blob/ubuntu22/20230911.1/images/linux/Ubuntu2204-Readme.md
2023-09-20T18:22:11.8336261Z Image Release: https://github.com/actions/runner-images/releases/tag/ubuntu22%2F20230911.1
2023-09-20T18:22:11.8336780Z ##[endgroup]
2023-09-20T18:22:11.8337236Z ##[group]Runner Image Provisioner
2023-09-20T18:22:11.8337666Z 2.0.299.1
2023-09-20T18:22:11.8337984Z ##[endgroup]
2023-09-20T18:22:11.8339379Z ##[group]GITHUB_TOKEN Permissions
2023-09-20T18:22:11.8341472Z Actions: write
2023-09-20T18:22:11.8341899Z Checks: write
2023-09-20T18:22:11.8342709Z Contents: write
2023-09-20T18:22:11.8343215Z Deployments: write
2023-09-20T18:22:11.8343649Z Discussions: write
2023-09-20T18:22:11.8344036Z Issues: write
2023-09-20T18:22:11.8344512Z Metadata: read
2023-09-20T18:22:11.8344866Z Packages: write
2023-09-20T18:22:11.8345262Z Pages: write
2023-09-20T18:22:11.8345746Z PullRequests: write
2023-09-20T18:22:11.8346151Z RepositoryProjects: write
2023-09-20T18:22:11.8346700Z SecurityEvents: write
2023-09-20T18:22:11.8347134Z Statuses: write
2023-09-20T18:22:11.8347485Z ##[endgroup]
2023-09-20T18:22:11.8352039Z Secret source: Actions
2023-09-20T18:22:11.8352869Z Prepare workflow directory
2023-09-20T18:22:11.9260379Z Prepare all required actions
2023-09-20T18:22:11.9495958Z Getting action download info
2023-09-20T18:22:12.2015705Z Download action repository 'actions/checkout@v3' (SHA:f43a0e5ff2bd294095638e18286ca9a3d1956744)
2023-09-20T18:22:13.0520338Z Complete job name: build
2023-09-20T18:22:13.1692714Z ##[group]Run actions/checkout@v3
2023-09-20T18:22:13.1693168Z with:
2023-09-20T18:22:13.1693549Z   repository: gnmeyer/ColorHex
2023-09-20T18:22:13.1694265Z   token: ***
2023-09-20T18:22:13.1694589Z   ssh-strict: true
2023-09-20T18:22:13.1694947Z   persist-credentials: true
2023-09-20T18:22:13.1695295Z   clean: true
2023-09-20T18:22:13.1695642Z   sparse-checkout-cone-mode: true
2023-09-20T18:22:13.1696019Z   fetch-depth: 1
2023-09-20T18:22:13.1696344Z   fetch-tags: false
2023-09-20T18:22:13.1696649Z   lfs: false
2023-09-20T18:22:13.1696966Z   submodules: false
2023-09-20T18:22:13.1697335Z   set-safe-directory: true
2023-09-20T18:22:13.1697665Z ##[endgroup]
2023-09-20T18:22:13.5691156Z Syncing repository: gnmeyer/ColorHex
2023-09-20T18:22:13.5693548Z ##[group]Getting Git version info
2023-09-20T18:22:13.5694280Z Working directory is '/home/runner/work/ColorHex/ColorHex'
2023-09-20T18:22:13.5696390Z [command]/usr/bin/git version
2023-09-20T18:22:13.5804465Z git version 2.42.0
2023-09-20T18:22:13.5842370Z ##[endgroup]
2023-09-20T18:22:13.5865415Z Temporarily overriding HOME='/home/runner/work/_temp/a4bf85e9-d34f-4821-a35a-a6f22c20bc9a' before making global git config changes
2023-09-20T18:22:13.5866561Z Adding repository directory to the temporary git global config as a safe directory
2023-09-20T18:22:13.5871655Z [command]/usr/bin/git config --global --add safe.directory /home/runner/work/ColorHex/ColorHex
2023-09-20T18:22:13.5945068Z Deleting the contents of '/home/runner/work/ColorHex/ColorHex'
2023-09-20T18:22:13.5950393Z ##[group]Initializing the repository
2023-09-20T18:22:13.5954811Z [command]/usr/bin/git init /home/runner/work/ColorHex/ColorHex
2023-09-20T18:22:13.6094432Z hint: Using 'master' as the name for the initial branch. This default branch name
2023-09-20T18:22:13.6095499Z hint: is subject to change. To configure the initial branch name to use in all
2023-09-20T18:22:13.6096629Z hint: of your new repositories, which will suppress this warning, call:
2023-09-20T18:22:13.6097264Z hint: 
2023-09-20T18:22:13.6098163Z hint: 	git config --global init.defaultBranch <name>
2023-09-20T18:22:13.6099184Z hint: 
2023-09-20T18:22:13.6100188Z hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
2023-09-20T18:22:13.6101032Z hint: 'development'. The just-created branch can be renamed via this command:
2023-09-20T18:22:13.6101846Z hint: 
2023-09-20T18:22:13.6102412Z hint: 	git branch -m <name>
2023-09-20T18:22:13.6110044Z Initialized empty Git repository in /home/runner/work/ColorHex/ColorHex/.git/
2023-09-20T18:22:13.6124016Z [command]/usr/bin/git remote add origin https://github.com/gnmeyer/ColorHex
2023-09-20T18:22:13.6194701Z ##[endgroup]
2023-09-20T18:22:13.6195555Z ##[group]Disabling automatic garbage collection
2023-09-20T18:22:13.6199431Z [command]/usr/bin/git config --local gc.auto 0
2023-09-20T18:22:13.6246777Z ##[endgroup]
2023-09-20T18:22:13.6247560Z ##[group]Setting up auth
2023-09-20T18:22:13.6255498Z [command]/usr/bin/git config --local --name-only --get-regexp core\.sshCommand
2023-09-20T18:22:13.6304746Z [command]/usr/bin/git submodule foreach --recursive sh -c "git config --local --name-only --get-regexp 'core\.sshCommand' && git config --local --unset-all 'core.sshCommand' || :"
2023-09-20T18:22:13.6952712Z [command]/usr/bin/git config --local --name-only --get-regexp http\.https\:\/\/github\.com\/\.extraheader
2023-09-20T18:22:13.6997742Z [command]/usr/bin/git submodule foreach --recursive sh -c "git config --local --name-only --get-regexp 'http\.https\:\/\/github\.com\/\.extraheader' && git config --local --unset-all 'http.https://github.com/.extraheader' || :"
2023-09-20T18:22:13.7366917Z [command]/usr/bin/git config --local http.https://github.com/.extraheader AUTHORIZATION: basic ***
2023-09-20T18:22:13.7610296Z ##[endgroup]
2023-09-20T18:22:13.7610892Z ##[group]Fetching the repository
2023-09-20T18:22:13.7612474Z [command]/usr/bin/git -c protocol.version=2 fetch --no-tags --prune --progress --no-recurse-submodules --depth=1 origin +d8c37077d50a30d328bfd45eece39124bc3519e7:refs/remotes/origin/main
2023-09-20T18:22:14.1423540Z remote: Enumerating objects: 7, done.        
2023-09-20T18:22:14.1424060Z remote: Counting objects:  14% (1/7)        
2023-09-20T18:22:14.1424472Z remote: Counting objects:  28% (2/7)        
2023-09-20T18:22:14.1424840Z remote: Counting objects:  42% (3/7)        
2023-09-20T18:22:14.1425189Z remote: Counting objects:  57% (4/7)        
2023-09-20T18:22:14.1425559Z remote: Counting objects:  71% (5/7)        
2023-09-20T18:22:14.1425924Z remote: Counting objects:  85% (6/7)        
2023-09-20T18:22:14.1426273Z remote: Counting objects: 100% (7/7)        
2023-09-20T18:22:14.1426655Z remote: Counting objects: 100% (7/7), done.        
2023-09-20T18:22:14.1427052Z remote: Compressing objects:  25% (1/4)        
2023-09-20T18:22:14.1427422Z remote: Compressing objects:  50% (2/4)        
2023-09-20T18:22:14.1427800Z remote: Compressing objects:  75% (3/4)        
2023-09-20T18:22:14.1428199Z remote: Compressing objects: 100% (4/4)        
2023-09-20T18:22:14.1428600Z remote: Compressing objects: 100% (4/4), done.        
2023-09-20T18:22:14.1429364Z remote: Total 7 (delta 0), reused 2 (delta 0), pack-reused 0        
2023-09-20T18:22:14.1655800Z From https://github.com/gnmeyer/ColorHex
2023-09-20T18:22:14.1657457Z  * [new ref]         d8c37077d50a30d328bfd45eece39124bc3519e7 -> origin/main
2023-09-20T18:22:14.1697773Z ##[endgroup]
2023-09-20T18:22:14.1764394Z ##[group]Determining the checkout info
2023-09-20T18:22:14.1764982Z ##[endgroup]
2023-09-20T18:22:14.1765493Z ##[group]Checking out the ref
2023-09-20T18:22:14.1766281Z [command]/usr/bin/git checkout --progress --force -B main refs/remotes/origin/main
2023-09-20T18:22:14.1780836Z Switched to a new branch 'main'
2023-09-20T18:22:14.1783606Z branch 'main' set up to track 'origin/main'.
2023-09-20T18:22:14.1868790Z ##[endgroup]
2023-09-20T18:22:14.1893996Z [command]/usr/bin/git log -1 --format='%H'
2023-09-20T18:22:14.1953607Z 'd8c37077d50a30d328bfd45eece39124bc3519e7'
2023-09-20T18:22:14.2372651Z ##[group]Run g++ main.cpp -std=c++17 -o firstIO
2023-09-20T18:22:14.2373217Z [36;1mg++ main.cpp -std=c++17 -o firstIO[0m
2023-09-20T18:22:14.2461298Z shell: /usr/bin/bash -e {0}
2023-09-20T18:22:14.2461685Z ##[endgroup]
2023-09-20T18:22:14.9546073Z Post job cleanup.
2023-09-20T18:22:15.0839988Z [command]/usr/bin/git version
2023-09-20T18:22:15.0894655Z git version 2.42.0
2023-09-20T18:22:15.0963677Z Temporarily overriding HOME='/home/runner/work/_temp/ae22dee8-f87b-4d79-8a8b-686366a4bc20' before making global git config changes
2023-09-20T18:22:15.0965184Z Adding repository directory to the temporary git global config as a safe directory
2023-09-20T18:22:15.0974414Z [command]/usr/bin/git config --global --add safe.directory /home/runner/work/ColorHex/ColorHex
2023-09-20T18:22:15.1031591Z [command]/usr/bin/git config --local --name-only --get-regexp core\.sshCommand
2023-09-20T18:22:15.1081340Z [command]/usr/bin/git submodule foreach --recursive sh -c "git config --local --name-only --get-regexp 'core\.sshCommand' && git config --local --unset-all 'core.sshCommand' || :"
2023-09-20T18:22:15.1419083Z [command]/usr/bin/git config --local --name-only --get-regexp http\.https\:\/\/github\.com\/\.extraheader
2023-09-20T18:22:15.1467647Z http.https://github.com/.extraheader
2023-09-20T18:22:15.1473124Z [command]/usr/bin/git config --local --unset-all http.https://github.com/.extraheader
2023-09-20T18:22:15.1556537Z [command]/usr/bin/git submodule foreach --recursive sh -c "git config --local --name-only --get-regexp 'http\.https\:\/\/github\.com\/\.extraheader' && git config --local --unset-all 'http.https://github.com/.extraheader' || :"
2023-09-20T18:22:15.2222678Z Cleaning up orphan processes
